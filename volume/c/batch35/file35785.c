// fichero 35785 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35785;

Registro35785 crear_registro35785(int id) {
    Registro35785 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
