// fichero 24877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24877;

Registro24877 crear_registro24877(int id) {
    Registro24877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
