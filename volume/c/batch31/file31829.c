// fichero 31829 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro31829;

Registro31829 crear_registro31829(int id) {
    Registro31829 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
