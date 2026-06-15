// fichero 25837 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25837;

Registro25837 crear_registro25837(int id) {
    Registro25837 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
