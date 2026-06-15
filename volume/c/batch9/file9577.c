// fichero 9577 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9577;

Registro9577 crear_registro9577(int id) {
    Registro9577 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
