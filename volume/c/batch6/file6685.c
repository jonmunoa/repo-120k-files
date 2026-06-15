// fichero 6685 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6685;

Registro6685 crear_registro6685(int id) {
    Registro6685 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
