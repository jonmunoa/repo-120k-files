// fichero 27877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27877;

Registro27877 crear_registro27877(int id) {
    Registro27877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
