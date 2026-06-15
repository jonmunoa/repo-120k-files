// fichero 40645 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40645;

Registro40645 crear_registro40645(int id) {
    Registro40645 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
