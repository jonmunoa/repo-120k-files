// fichero 3101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3101;

Registro3101 crear_registro3101(int id) {
    Registro3101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
