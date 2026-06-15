// fichero 9601 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9601;

Registro9601 crear_registro9601(int id) {
    Registro9601 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
