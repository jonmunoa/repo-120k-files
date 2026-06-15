// fichero 29129 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29129;

Registro29129 crear_registro29129(int id) {
    Registro29129 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
