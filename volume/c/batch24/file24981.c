// fichero 24981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24981;

Registro24981 crear_registro24981(int id) {
    Registro24981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
