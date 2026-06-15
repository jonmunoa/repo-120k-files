// fichero 11933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11933;

Registro11933 crear_registro11933(int id) {
    Registro11933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
