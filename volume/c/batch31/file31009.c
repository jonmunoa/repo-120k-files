// fichero 31009 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31009;

Registro31009 crear_registro31009(int id) {
    Registro31009 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
