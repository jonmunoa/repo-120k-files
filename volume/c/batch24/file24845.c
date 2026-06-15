// fichero 24845 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24845;

Registro24845 crear_registro24845(int id) {
    Registro24845 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
