// fichero 26941 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro26941;

Registro26941 crear_registro26941(int id) {
    Registro26941 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
