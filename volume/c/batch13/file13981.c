// fichero 13981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13981;

Registro13981 crear_registro13981(int id) {
    Registro13981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
