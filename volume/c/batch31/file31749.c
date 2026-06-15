// fichero 31749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31749;

Registro31749 crear_registro31749(int id) {
    Registro31749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
