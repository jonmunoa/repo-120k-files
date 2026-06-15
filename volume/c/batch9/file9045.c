// fichero 9045 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9045;

Registro9045 crear_registro9045(int id) {
    Registro9045 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
