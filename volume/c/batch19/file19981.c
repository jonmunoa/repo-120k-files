// fichero 19981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19981;

Registro19981 crear_registro19981(int id) {
    Registro19981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
