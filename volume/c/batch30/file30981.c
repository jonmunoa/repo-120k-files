// fichero 30981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30981;

Registro30981 crear_registro30981(int id) {
    Registro30981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
