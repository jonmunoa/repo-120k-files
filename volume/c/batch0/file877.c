// fichero 877 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro877;

Registro877 crear_registro877(int id) {
    Registro877 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
