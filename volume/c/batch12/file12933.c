// fichero 12933 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12933;

Registro12933 crear_registro12933(int id) {
    Registro12933 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
