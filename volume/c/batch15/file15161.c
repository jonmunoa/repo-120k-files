// fichero 15161 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15161;

Registro15161 crear_registro15161(int id) {
    Registro15161 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
