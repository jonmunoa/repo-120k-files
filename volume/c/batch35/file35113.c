// fichero 35113 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35113;

Registro35113 crear_registro35113(int id) {
    Registro35113 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
