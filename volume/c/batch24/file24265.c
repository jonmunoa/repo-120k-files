// fichero 24265 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24265;

Registro24265 crear_registro24265(int id) {
    Registro24265 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
