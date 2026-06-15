// fichero 6933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6933;

Registro6933 crear_registro6933(int id) {
    Registro6933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
