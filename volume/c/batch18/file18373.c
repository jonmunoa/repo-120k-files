// fichero 18373 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18373;

Registro18373 crear_registro18373(int id) {
    Registro18373 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
