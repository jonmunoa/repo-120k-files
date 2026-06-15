// fichero 981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro981;

Registro981 crear_registro981(int id) {
    Registro981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
