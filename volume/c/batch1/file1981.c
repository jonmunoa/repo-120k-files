// fichero 1981 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1981;

Registro1981 crear_registro1981(int id) {
    Registro1981 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
