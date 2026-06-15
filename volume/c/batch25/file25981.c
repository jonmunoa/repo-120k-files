// fichero 25981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25981;

Registro25981 crear_registro25981(int id) {
    Registro25981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
