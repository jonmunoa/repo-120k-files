// fichero 5713 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5713;

Registro5713 crear_registro5713(int id) {
    Registro5713 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
