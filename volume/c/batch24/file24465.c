// fichero 24465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24465;

Registro24465 crear_registro24465(int id) {
    Registro24465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
