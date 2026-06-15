// fichero 41581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41581;

Registro41581 crear_registro41581(int id) {
    Registro41581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
