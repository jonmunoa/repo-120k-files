// fichero 21085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21085;

Registro21085 crear_registro21085(int id) {
    Registro21085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
