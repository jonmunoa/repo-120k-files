// fichero 16933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16933;

Registro16933 crear_registro16933(int id) {
    Registro16933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
