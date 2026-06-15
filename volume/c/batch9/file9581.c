// fichero 9581 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9581;

Registro9581 crear_registro9581(int id) {
    Registro9581 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
