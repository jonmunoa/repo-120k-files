// fichero 28981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28981;

Registro28981 crear_registro28981(int id) {
    Registro28981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
