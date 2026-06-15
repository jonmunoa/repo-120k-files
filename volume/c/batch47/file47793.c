// fichero 47793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47793;

Registro47793 crear_registro47793(int id) {
    Registro47793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
