// fichero 9517 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9517;

Registro9517 crear_registro9517(int id) {
    Registro9517 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
