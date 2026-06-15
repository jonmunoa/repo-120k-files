// fichero 47981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47981;

Registro47981 crear_registro47981(int id) {
    Registro47981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
