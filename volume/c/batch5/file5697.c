// fichero 5697 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5697;

Registro5697 crear_registro5697(int id) {
    Registro5697 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
