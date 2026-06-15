// fichero 7117 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7117;

Registro7117 crear_registro7117(int id) {
    Registro7117 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
