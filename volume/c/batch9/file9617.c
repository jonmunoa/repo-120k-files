// fichero 9617 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9617;

Registro9617 crear_registro9617(int id) {
    Registro9617 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
