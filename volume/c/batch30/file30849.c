// fichero 30849 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30849;

Registro30849 crear_registro30849(int id) {
    Registro30849 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
