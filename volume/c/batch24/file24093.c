// fichero 24093 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24093;

Registro24093 crear_registro24093(int id) {
    Registro24093 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
