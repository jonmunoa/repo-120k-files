// fichero 4085 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4085;

Registro4085 crear_registro4085(int id) {
    Registro4085 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
