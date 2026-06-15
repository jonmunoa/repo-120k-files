// fichero 41941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41941;

Registro41941 crear_registro41941(int id) {
    Registro41941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
