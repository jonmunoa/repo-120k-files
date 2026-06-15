// fichero 34917 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34917;

Registro34917 crear_registro34917(int id) {
    Registro34917 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
