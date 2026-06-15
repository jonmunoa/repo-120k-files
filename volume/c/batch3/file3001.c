// fichero 3001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro3001;

Registro3001 crear_registro3001(int id) {
    Registro3001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
