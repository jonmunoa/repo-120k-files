// fichero 44817 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44817;

Registro44817 crear_registro44817(int id) {
    Registro44817 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44817(Registro44817 r) {
    return r.valor + r.id;
}
