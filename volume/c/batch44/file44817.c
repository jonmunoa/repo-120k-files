// fichero 44817 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro44817;

Registro44817 crear_registro44817(int id) {
    Registro44817 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
