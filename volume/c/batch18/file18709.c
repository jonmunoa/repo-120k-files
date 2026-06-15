// fichero 18709 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18709;

Registro18709 crear_registro18709(int id) {
    Registro18709 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
