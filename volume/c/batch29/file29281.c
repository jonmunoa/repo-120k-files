// fichero 29281 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29281;

Registro29281 crear_registro29281(int id) {
    Registro29281 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
