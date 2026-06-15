// fichero 10453 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10453;

Registro10453 crear_registro10453(int id) {
    Registro10453 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
