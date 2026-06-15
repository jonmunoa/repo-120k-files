// fichero 5153 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5153;

Registro5153 crear_registro5153(int id) {
    Registro5153 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
