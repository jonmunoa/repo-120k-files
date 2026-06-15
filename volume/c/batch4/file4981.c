// fichero 4981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4981;

Registro4981 crear_registro4981(int id) {
    Registro4981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
